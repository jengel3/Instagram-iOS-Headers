
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Instagram/IGUserTokenizerTypeaheadViewControllerDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>

@protocol IGAlbumCollaborationViewControllerDelegate;
@class IGFeedItem, FXBlurView, IGTapButton, UILabel, UICollectionView, UIView, CAGradientLayer, NSMutableOrderedSet, IGUser, NSString;

@interface IGAlbumCollaborationViewController : IGViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIViewControllerTransitioningDelegate, IGUserTokenizerTypeaheadViewControllerDelegate, IGActionSheetDelegate> {

	id<IGAlbumCollaborationViewControllerDelegate> _delegate;
	IGFeedItem* _feedItem;
	FXBlurView* _backgroundBlurView;
	IGTapButton* _dismissButton;
	IGTapButton* _changeTitleButton;
	UILabel* _secondaryLabel;
	UICollectionView* _collectionView;
	UIView* _collectionViewContainer;
	CAGradientLayer* _collectionViewGradientLayer;
	NSMutableOrderedSet* _members;
	NSMutableOrderedSet* _pendingUsers;
	IGUser* _longPressedUser;

}

@property (assign,nonatomic,__weak) id<IGAlbumCollaborationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                       //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) FXBlurView * backgroundBlurView;                                             //@synthesize backgroundBlurView=_backgroundBlurView - In the implementation block
@property (nonatomic,retain) IGTapButton * dismissButton;                                                 //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) IGTapButton * changeTitleButton;                                             //@synthesize changeTitleButton=_changeTitleButton - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                                    //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * collectionViewContainer;                                            //@synthesize collectionViewContainer=_collectionViewContainer - In the implementation block
@property (nonatomic,retain) CAGradientLayer * collectionViewGradientLayer;                               //@synthesize collectionViewGradientLayer=_collectionViewGradientLayer - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * members;                                               //@synthesize members=_members - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * pendingUsers;                                          //@synthesize pendingUsers=_pendingUsers - In the implementation block
@property (nonatomic,retain) IGUser * longPressedUser;                                                    //@synthesize longPressedUser=_longPressedUser - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)updateUsersFromFeedItem;
-(void)feedItemUpdated;
-(void)setBackgroundBlurView:(FXBlurView *)arg1 ;
-(FXBlurView *)backgroundBlurView;
-(void)setChangeTitleButton:(IGTapButton *)arg1 ;
-(void)updateChangeTitleButton;
-(IGTapButton *)changeTitleButton;
-(void)changeTitleButtonTapped;
-(char)canEditCollaborationSettings;
-(void)setCollectionViewContainer:(UIView *)arg1 ;
-(UIView *)collectionViewContainer;
-(void)setCollectionViewGradientLayer:(CAGradientLayer *)arg1 ;
-(CAGradientLayer *)collectionViewGradientLayer;
-(void)didLongPressCollectionView:(id)arg1 ;
-(int)numberOfExtraItems;
-(NSMutableOrderedSet *)pendingUsers;
-(char)isIndexPathOfAddNewCell:(id)arg1 ;
-(void)setLongPressedUser:(IGUser *)arg1 ;
-(void)updateServerWithCurrentCollaborators;
-(IGUser *)longPressedUser;
-(void)setPendingUsers:(NSMutableOrderedSet *)arg1 ;
-(void)dismissButtonTapped;
-(id)initWithAlbum:(id)arg1 delegate:(id)arg2 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)userTokenizerTypeaheadViewControllerShouldCloseWithSelectedUsers:(id)arg1 ;
-(void)setDelegate:(id<IGAlbumCollaborationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGAlbumCollaborationViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UILabel *)secondaryLabel;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)setMembers:(NSMutableOrderedSet *)arg1 ;
-(IGTapButton *)dismissButton;
-(NSMutableOrderedSet *)members;
-(void)setDismissButton:(IGTapButton *)arg1 ;
@end
