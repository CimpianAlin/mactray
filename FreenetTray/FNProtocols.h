/* 
    Copyright (C) 2015 Stephen Oliver <steve@infincia.com>

    This code is distributed under the GNU General Public License, version 2 
    (or at your option any later version).
    
    3rd party libraries may be distributed under an alternate Open Source license.
    
    See the Acknowledgements file included with this code for details.
    
*/

#import <Foundation/Foundation.h>

@protocol FNNodeStateProtocol <NSObject>
@required
-(void)nodeStateUnknown:(NSNotification*)notification;
-(void)nodeStateRunning:(NSNotification*)notification;
-(void)nodeStateNotRunning:(NSNotification*)notification;
@end


@protocol FNNodeStatsProtocol <NSObject>
@required
-(void)didReceiveNodeHello:(NSNotification*)notification;
-(void)didReceiveNodeStats:(NSNotification*)notification;
@end

@protocol FCPDelegate <NSObject>
@required
-(void)didDisconnect;
-(void)didReceiveNodeHello:(NSDictionary *)nodeHello;
-(void)didReceiveNodeStats:(NSDictionary *)nodeStats;
-(void)didReceiveUserAlert:(NSDictionary *)nodeUserAlert;
@end

@protocol FCPDataSource <NSObject>
@required
-(NSURL *)nodeFCPURL;
@end

@protocol FNInstallerDelegate <NSObject>
@required
-(void)userDidSelectInstallLocation:(NSURL *)installURL;
-(void)installerDidCopyFiles;
-(void)installerDidFinish;
-(void)installerDidFailWithLog:(NSString *)log;
@end

@protocol FNInstallerDataSource <NSObject>
@required

@end
