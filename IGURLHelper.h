

@interface IGURLHelper : NSObject
+(void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
+(void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(char)arg3 controls:(char)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)openURL:(id)arg1 controller:(id)arg2 ;
+(id)actionForURL:(id)arg1 ;
+(void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(char)arg3 sourceURL:(id)arg4 ctaPresenterContext:(id)arg5 ;
+(void)openShortlinkURL:(id)arg1 linkTarget:(id)arg2 controller:(id)arg3 ;
+(void)openInstagramURLInSignInTab:(id)arg1 ;
+(void)logURLLoadedIfNecessary:(id)arg1 ;
+(void)openInstagramURLInTimelineTab:(id)arg1 ;
+(id)permalinkForAppLinkURL:(id)arg1 ;
+(void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(char)arg3 sourceURL:(id)arg4 ;
+(void)pushViewControllerForAction:(id)arg1 params:(id)arg2 usingNavigationController:(id)arg3 animated:(char)arg4 sourceURL:(id)arg5 ctaPresenterContext:(id)arg6 ;
+(void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(char)arg3 controls:(char)arg4 title:(id)arg5 completionHandler:(/*^block*/id)arg6 cancelModalDismissHandler:(/*^block*/id)arg7 ;
+(char)handleITunesURLForURL:(id)arg1 ;
+(void)showWebViewController:(id)arg1 fromViewController:(id)arg2 displaysModally:(char)arg3 ;
+(void)confirmBeforeOpeningURL:(id)arg1 ;
+(void)handleDirectToExploreWithNavigationController:(id)arg1 ;
+(id)viewControllerForLocationID:(id)arg1 ;
+(id)viewControllerForMediaID:(id)arg1 ;
+(void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(char)arg3 title:(id)arg4 ;
+(void)showWebViewController:(id)arg1 displaysModally:(char)arg2 ;
+(void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(char)arg3 ;
+(void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(char)arg3 controls:(char)arg4 ;
+(void)openURL:(id)arg1 ;
+(id)infoForURL:(id)arg1 ;
@end

