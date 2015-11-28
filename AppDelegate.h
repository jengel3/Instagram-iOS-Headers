
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSMutableSet, IGShortcutHandler, NSString;

@interface AppDelegate : NSObject <UIApplicationDelegate> {

	char _handledPushNoteInDidFinishLaunching;
	char _hasSetupLogging;
	UIWindow* _window;
	NSMutableSet* _seenErrorURLs;
	IGShortcutHandler* _shortcutHandler;

}

@property (nonatomic,retain) UIWindow * window;                                     //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) char handledPushNoteInDidFinishLaunching;              //@synthesize handledPushNoteInDidFinishLaunching=_handledPushNoteInDidFinishLaunching - In the implementation block
@property (nonatomic,retain) NSMutableSet * seenErrorURLs;                          //@synthesize seenErrorURLs=_seenErrorURLs - In the implementation block
@property (assign,nonatomic) char hasSetupLogging;                                  //@synthesize hasSetupLogging=_hasSetupLogging - In the implementation block
@property (nonatomic,readonly) IGShortcutHandler * shortcutHandler;                 //@synthesize shortcutHandler=_shortcutHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasSetupLogging;
-(void)setHasSetupLogging:(char)arg1 ;
-(void)logMemoryCrashAndPromptToRestartIfNeeded;
-(void)setUpInstagramNotifications;
-(IGShortcutHandler *)shortcutHandler;
-(void)setUpDefaults;
-(void)startMainAppWithMainFeedSource:(id)arg1 animated:(char)arg2 ;
-(void)setHandledPushNoteInDidFinishLaunching:(char)arg1 ;
-(void)exitIfSafe;
-(void)applicationLifecycleChange:(id)arg1 ;
-(void)userLoginCompleted:(id)arg1 ;
-(void)userLogout:(id)arg1 ;
-(void)networkRequestDidFail:(id)arg1 ;
-(void)registerForPush;
-(char)handledPushNoteInDidFinishLaunching;
-(NSMutableSet *)seenErrorURLs;
-(void)setSeenErrorURLs:(NSMutableSet *)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(char)application:(id)arg1 handleOpenURL:(id)arg2 ;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(/*^block*/id)arg3 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
@end

