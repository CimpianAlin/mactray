/* 
    Copyright (C) 2015 Stephen Oliver <steve@infincia.com>

    This code is distributed under the GNU General Public License, version 2 
    (or at your option any later version).
    
    3rd party libraries may be distributed under an alternate Open Source license.
    
    See the Acknowledgements file included with this code for details.
    
*/

@import Cocoa;

@interface FNNodeController : NSObject <FNFCPWrapperDelegate, FNFCPWrapperDataSource, NSUserNotificationCenterDelegate>

@property enum FNNodeState currentNodeState;

- (void)startFreenet;
- (void)stopFreenet;

@property NSDictionary *wrapperConfig;
@property NSDictionary *freenetConfig;

@property NSURL *nodeLocation;
@property NSURL *fcpLocation;
@property NSURL *fproxyLocation;
@property NSURL *downloadsFolder;

@end
