
#import <Instagram/IGTabPageViewController.h>

@class NSString, IGUserSession, IGAdsManagerLogger;

@interface IGPromoteOriginalTabbedViewController : IGTabPageViewController {

	NSString* _organicMediaId;
	NSString* _promotedMediaId;
	IGUserSession* _userSession;
	IGAdsManagerLogger* _logger;

}

@property (nonatomic,copy,readonly) NSString * organicMediaId;               //@synthesize organicMediaId=_organicMediaId - In the implementation block
@property (nonatomic,copy,readonly) NSString * promotedMediaId;              //@synthesize promotedMediaId=_promotedMediaId - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                  //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) IGAdsManagerLogger * logger;                  //@synthesize logger=_logger - In the implementation block
-(id)analyticsModule;
-(NSString *)organicMediaId;
-(id)initWithOrganicMediaId:(id)arg1 promotedMediaId:(id)arg2 userSession:(id)arg3 logger:(id)arg4 ;
-(char)disableNonEdgeNavigationGesture;
-(NSString *)promotedMediaId;
-(void)setupViewControllers;
-(IGAdsManagerLogger *)logger;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(IGUserSession *)userSession;
@end

