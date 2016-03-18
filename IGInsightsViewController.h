
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGInsightsComponentListViewControllerDelegate.h>
#import <Instagram/IGInsightsDataProviderDelegate.h>

@class UIActivityIndicatorView, NSArray, IGInsightsTabBarController, IGInsightsDataProvider, NSString;

@interface IGInsightsViewController : IGViewController <IGInsightsComponentListViewControllerDelegate, IGInsightsDataProviderDelegate> {

	char _defaultTabCreated;
	UIActivityIndicatorView* _spinner;
	NSArray* _defaultTabComponents;
	IGInsightsTabBarController* _tabBarViewController;
	IGInsightsDataProvider* _dataProvider;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;                            //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) char defaultTabCreated;                                         //@synthesize defaultTabCreated=_defaultTabCreated - In the implementation block
@property (nonatomic,copy) NSArray * defaultTabComponents;                                   //@synthesize defaultTabComponents=_defaultTabComponents - In the implementation block
@property (nonatomic,retain) IGInsightsTabBarController * tabBarViewController;              //@synthesize tabBarViewController=_tabBarViewController - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * dataProvider;                          //@synthesize dataProvider=_dataProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(void)failedToGetAccessTokenForDataProvider:(id)arg1 ;
-(IGInsightsTabBarController *)tabBarViewController;
-(void)setDefaultTabComponents:(NSArray *)arg1 ;
-(NSArray *)defaultTabComponents;
-(void)setTabBarViewController:(IGInsightsTabBarController *)arg1 ;
-(void)didSelectComponentListViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(void)_initializeSpinner;
-(void)_startRequest;
-(void)_setupTabBarViewController;
-(void)_requestTabBarItemsAndDefaultTabContent;
-(id)_createTabContentViewControllerWithQueryItems:(id)arg1 ;
-(id)_createViewControllerForTab:(id)arg1 ;
-(char)defaultTabCreated;
-(void)setDefaultTabCreated:(char)arg1 ;
-(id)init;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setDataProvider:(IGInsightsDataProvider *)arg1 ;
-(IGInsightsDataProvider *)dataProvider;
-(UIActivityIndicatorView *)spinner;
@end

