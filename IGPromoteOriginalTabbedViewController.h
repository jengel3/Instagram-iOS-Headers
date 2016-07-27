
#import <Instagram/IGTabPageViewController.h>

@class NSString, IGUserSession;

@interface IGPromoteOriginalTabbedViewController : IGTabPageViewController {

	NSString* _organicMediaId;
	NSString* _promotedMediaId;
	IGUserSession* _userSession;

}

@property (nonatomic,copy,readonly) NSString * organicMediaId;               //@synthesize organicMediaId=_organicMediaId - In the implementation block
@property (nonatomic,copy,readonly) NSString * promotedMediaId;              //@synthesize promotedMediaId=_promotedMediaId - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                  //@synthesize userSession=_userSession - In the implementation block
-(id)analyticsModule;
-(id)initWithOrganicMediaId:(id)arg1 promotedMediaId:(id)arg2 userSession:(id)arg3 ;
-(NSString *)organicMediaId;
-(char)disableNonEdgeNavigationGesture;
-(NSString *)promotedMediaId;
-(void)setupViewControllers;
-(void)viewDidLoad;
-(IGUserSession *)userSession;
@end

