
#import <UIKit/UIViewController.h>
#import <Instagram/IGInsightsCollectionViewDelegate.h>
#import <Instagram/IGInsightsHeaderViewDelegate.h>
#import <Instagram/IGInsightsComponentViewController.h>

@protocol IGInsightsComponentViewControllerNavigationDelegate;
@class IGInsightsCollectionView, NSString, NSDictionary;

@interface IGInsightsCollectionViewController : UIViewController <IGInsightsCollectionViewDelegate, IGInsightsHeaderViewDelegate, IGInsightsComponentViewController> {

	id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate;
	IGInsightsCollectionView* _insightsCollectionView;
	NSString* _header;
	NSDictionary* _buttonQueryItems;

}

@property (nonatomic,retain) IGInsightsCollectionView * insightsCollectionView;                                              //@synthesize insightsCollectionView=_insightsCollectionView - In the implementation block
@property (nonatomic,copy,readonly) NSString * header;                                                                       //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * buttonQueryItems;                                                         //@synthesize buttonQueryItems=_buttonQueryItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate; 
-(NSDictionary *)buttonQueryItems;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQueryItems:(id)arg3 mediaItemCount:(int)arg4 ;
-(IGInsightsCollectionView *)insightsCollectionView;
-(void)didSelectCellOnCollectionView:(id)arg1 ForFeedItem:(id)arg2 ;
-(void)didTapButtonOnHeaderView:(id)arg1 ;
-(void)setInsightsCollectionView:(IGInsightsCollectionView *)arg1 ;
-(void)dealloc;
-(NSString *)header;
-(id<IGInsightsComponentViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentViewControllerNavigationDelegate>)arg1 ;
@end

