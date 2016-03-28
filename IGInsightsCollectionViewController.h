
#import <UIKit/UIViewController.h>
#import <Instagram/IGInsightsCollectionViewDelegate.h>
#import <Instagram/IGInsightsHeaderViewDelegate.h>
#import <Instagram/IGInsightsComponentViewController.h>

@protocol IGInsightsComponentViewControllerNavigationDelegate;
@class IGInsightsCollectionView, NSString, IGInsightsQuery;

@interface IGInsightsCollectionViewController : UIViewController <IGInsightsCollectionViewDelegate, IGInsightsHeaderViewDelegate, IGInsightsComponentViewController> {

	id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate;
	IGInsightsCollectionView* _insightsCollectionView;
	NSString* _header;
	IGInsightsQuery* _buttonQuery;

}

@property (nonatomic,retain) IGInsightsCollectionView * insightsCollectionView;                                              //@synthesize insightsCollectionView=_insightsCollectionView - In the implementation block
@property (nonatomic,copy,readonly) NSString * header;                                                                       //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) IGInsightsQuery * buttonQuery;                                                                //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate; 
-(IGInsightsQuery *)buttonQuery;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQuery:(id)arg3 mediaItemCount:(int)arg4 ;
-(IGInsightsCollectionView *)insightsCollectionView;
-(void)didTapButtonOnHeaderView:(id)arg1 ;
-(void)didSelectCellOnCollectionView:(id)arg1 ForFeedItem:(id)arg2 ;
-(void)setInsightsCollectionView:(IGInsightsCollectionView *)arg1 ;
-(void)dealloc;
-(NSString *)header;
-(id<IGInsightsComponentViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentViewControllerNavigationDelegate>)arg1 ;
@end

