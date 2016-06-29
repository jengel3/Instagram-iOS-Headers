
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGAlbumSubscriptionTrayCellItemControllerDelegate.h>
#import <Instagram/IGAlbumSubcriptionTrayFullscreenControllerPresenterDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class IGListCollectionView, IGListAdapter, IGAlbumTrayPresentationAnimationController, IGReelSubscriptionTrayModel, NSString;

@interface IGAlbumSubscriptionTrayCollectionCell : UICollectionViewCell <IGListAdapterDataSource, IGAlbumSubscriptionTrayCellItemControllerDelegate, IGAlbumSubcriptionTrayFullscreenControllerPresenterDelegate, UIViewControllerTransitioningDelegate> {

	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGAlbumTrayPresentationAnimationController* _animationController;
	IGReelSubscriptionTrayModel* _model;

}

@property (nonatomic,readonly) IGListCollectionView * collectionView;                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGListAdapter * listAdapter;                                                   //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,retain) IGAlbumTrayPresentationAnimationController * animationController;              //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,retain) IGReelSubscriptionTrayModel * model;                                           //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)traySortDescriptors;
+(float)height;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)albumSubcriptionTrayDidFocusOnModelItem:(id)arg1 ;
-(IGListAdapter *)listAdapter;
-(void)albumSubcriptionTrayFullscreenControllerPresenterDidFinish:(id)arg1 ;
-(void)setListAdapter:(IGListAdapter *)arg1 ;
-(void)subscriptionTrayItemController:(id)arg1 didSelectCell:(id)arg2 ;
-(void)albumSeenStateUpdated;
-(id)cellForItemModel:(id)arg1 ;
-(void)configureWithModel:(id)arg1 viewController:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setAnimationController:(IGAlbumTrayPresentationAnimationController *)arg1 ;
-(IGAlbumTrayPresentationAnimationController *)animationController;
-(IGListCollectionView *)collectionView;
-(IGReelSubscriptionTrayModel *)model;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setModel:(IGReelSubscriptionTrayModel *)arg1 ;
@end

