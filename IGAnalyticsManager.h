

@class NSRegularExpression;

@interface IGAnalyticsManager : NSObject {

	char _cachedRequestSamplingFlag;
	NSRegularExpression* _cdnSuffixRegex;

}

@property (assign,nonatomic) char cachedRequestSamplingFlag;                    //@synthesize cachedRequestSamplingFlag=_cachedRequestSamplingFlag - In the implementation block
@property (nonatomic,retain) NSRegularExpression * cdnSuffixRegex;              //@synthesize cdnSuffixRegex=_cdnSuffixRegex - In the implementation block
+(id)scheduleWebViewEvent:(id)arg1 ;
-(void)updateCachedRequestSamplingFlag;
-(void)appDidLaunch:(id)arg1 ;
-(void)exploreFollowPeopleOpened:(id)arg1 ;
-(void)exploreRecommendPeopleSkip:(id)arg1 ;
-(void)exploreRecommendPeopleFollow:(id)arg1 ;
-(void)mediaUploadFailed:(id)arg1 ;
-(void)shareServiceChanged:(id)arg1 ;
-(void)willShareMedia:(id)arg1 ;
-(void)saveOriginalPhotosSettingChanged:(id)arg1 ;
-(void)privatePostsSettingChanged:(id)arg1 ;
-(void)autoplayVideoSettingChanged:(id)arg1 ;
-(void)preloadVideoSettingChanged:(id)arg1 ;
-(void)logDeviceInfoAndDeviceDataUsage;
-(void)logAppDataUsage;
-(void)onCameraRollInitialized;
-(void)onPhotoPermissionsPrompted:(id)arg1 ;
-(void)onPushPermissionPrompted:(id)arg1 ;
-(void)onLocationAuthorizationStatusAuthorized:(id)arg1 ;
-(void)onLocationAuthorizationStatusDenied:(id)arg1 ;
-(void)onLocationPermissionInstructionsPrompted:(id)arg1 ;
-(void)videoCacheAccess:(id)arg1 ;
-(void)imageCacheAccess:(id)arg1 ;
-(void)onUserLoginCompleted:(id)arg1 ;
-(void)onNetworkRequest:(id)arg1 ;
-(void)feedDidScrollToBottom:(id)arg1 ;
-(void)handleUserSwitched:(id)arg1 ;
-(void)handleUserIDUpdated:(id)arg1 ;
-(void)handleLogoutAllUsers:(id)arg1 ;
-(void)handleFacebookIDUpdated:(id)arg1 ;
-(void)logTimeSpent;
-(void)onCommentDeleteButtonTapped:(id)arg1 ;
-(void)onCommentSwipeToDelete:(id)arg1 ;
-(void)onCommentUndoAlertBarTapped:(id)arg1 ;
-(void)onCommentBulkDeleteOperation:(id)arg1 ;
-(void)mediaLoaderRequestDidFail:(id)arg1 ;
-(void)onInAppBrowserBack:(id)arg1 ;
-(void)onInAppBrowserForward:(id)arg1 ;
-(void)onInAppBrowserLoadURL:(id)arg1 ;
-(void)onInAppBrowserLoadURLError:(id)arg1 ;
-(void)onInAppBrowserPageLoaded:(id)arg1 ;
-(void)setCachedRequestSamplingFlag:(char)arg1 ;
-(char)cachedRequestSamplingFlag;
-(char)shouldRecordRequest:(id)arg1 ;
-(id)labelForRequestIfInstrumented:(id)arg1 ;
-(char)isInternalAPIUrl:(id)arg1 ;
-(id)labelForInternalAPIUrl:(id)arg1 ;
-(char)isCDNURL:(id)arg1 ;
-(id)cdnSuffixFromPath:(id)arg1 ;
-(char)isInstagramURL:(id)arg1 ;
-(NSRegularExpression *)cdnSuffixRegex;
-(void)logDeviceInformation;
-(void)setCdnSuffixRegex:(NSRegularExpression *)arg1 ;
-(void)onLocationDenied:(id)arg1 ;
-(void)onLocationUpdated:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

