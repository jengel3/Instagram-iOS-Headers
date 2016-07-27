
#import <UIKit/UIViewController.h>
#import <Instagram/IGInsightsCollectionViewDelegate.h>
#import <Instagram/IGInsightsHeaderViewDelegate.h>
#import <Instagram/IGInsightsComponentViewController.h>

@protocol IGInsightsComponentViewControllerNavigationDelegate;
@class IGInsightsCollectionView, NSString, IGInsightsQuery, IGInsightsLoggingHelper;

@interface IGInsightsCollectionViewController : UIViewController <IGInsightsCollectionViewDelegate, IGInsightsHeaderViewDelegate, IGInsightsComponentViewController> {

	id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate;
	IGInsightsCollectionView* _insightsCollectionView;
	NSString* _header;
	IGInsightsQuery* _buttonQuery;
	IGInsightsLoggingHelper* _loggingHelper;

}

@property (nonatomic,copy,readonly) NSString * header;                                                                       //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) IGInsightsQuery * buttonQuery;                                                                //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                                        //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,retain) IGInsightsCollectionView * insightsCollectionView;                                              //@synthesize insightsCollectionView=_insightsCollectionView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate; 
-(IGInsightsLoggingHelper *)loggingHelper;
-(IGInsightsQuery *)buttonQuery;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQuery:(id)arg3 mediaItemCount:(int)arg4 loggingHelper:(id)arg5 ;
-(IGInsightsCollectionView *)insightsCollectionView;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)didTapButtonOnHeaderView:(id)arg1 ;
-(void)setInsightsCollectionView:(IGInsightsCollectionView *)arg1 ;
-(void)didSelectCellOnCollectionView:(id)arg1 ForFeedItem:(id)arg2 ;
-(void)dealloc;
-(NSString *)header;
-(id<IGInsightsComponentViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentViewControllerNavigationDelegate>)arg1 ;
@end

