/* 
    Copyright (C) 2015 Stephen Oliver <steve@infincia.com>

    This code is distributed under the GNU General Public License, version 2 
    (or at your option any later version).
    
    3rd party libraries may be distributed under an alternate Open Source license.
    
    See the LICENSE file included with this code for details.
    
*/


#import "FNConstants.h"

#pragma mark - General constants

NSString *const FNWebDomain = @"freenetproject.org";
NSString *const FNNodeInstallationPathname = @"Freenet";
NSString *const FNNodeRunscriptPathname = @"run.sh";
NSString *const FNNodeAnchorFilePathname = @"Freenet.anchor";
NSString *const FNNodeWrapperConfigFilePathname = @"wrapper.conf";
NSString *const FNNodeFreenetConfigFilePathname = @"freenet.ini";

NSTimeInterval const FNNodeCheckTimeInterval = 1;

#pragma mark - NSUserDefaults keys

NSString *const FNStartAtLaunchKey = @"startatlaunch";

NSString *const FNNodeFProxyURLKey = @"nodeurl";
NSString *const FNNodeFCPURLKey = @"nodefcpurl";
NSString *const FNNodeInstallationDirectoryKey = @"nodepath";
NSString *const FNNodeFirstLaunchKey = @"firstlaunch";

#pragma mark - Custom NSNotifications

NSString *const FNNodeStateRunningNotification    = @"FNNodeStateRunningNotification";
NSString *const FNNodeStateNotRunningNotification = @"FNNodeStateNotRunningNotification";

NSString *const FNNodeStatsReceivedNotification = @"FNNodeStatsReceivedNotification";
