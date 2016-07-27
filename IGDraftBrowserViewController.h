
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol IGDraftBrowserViewControllerDelegate;
@class IGUserSession, UICollectionView, NSMutableOrderedSet, NSMutableSet, UIView, UIButton, NSString;

@interface IGDraftBrowserViewController : IGViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	char _isEditing;
	id<IGDraftBrowserViewControllerDelegate> _delegate;
	IGUserSession* _userSession;
	UICollectionView* _collectionView;
	NSMutableOrderedSet* _drafts;
	NSMutableSet* _selectedDrafts;
	UIView* _bottomBar;
	UIButton* _discardButton;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                         //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * drafts;                                          //@synthesize drafts=_drafts - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedDrafts;                                         //@synthesize selectedDrafts=_selectedDrafts - In the implementation block
@property (nonatomic,retain) UIView * bottomBar;                                                    //@synthesize bottomBar=_bottomBar - In the implementation block
@property (nonatomic,retain) UIButton * discardButton;                                              //@synthesize discardButton=_discardButton - In the implementation block
@property (assign,nonatomic) char isEditing;                                                        //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic,__weak) id<IGDraftBrowserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)dismissButtonTapped;
-(void)setDiscardButton:(UIButton *)arg1 ;
-(UIButton *)discardButton;
-(void)deleteSelectedButtonTapped;
-(void)updateDeleteSelectedButton;
-(void)setIsEditing:(char)arg1 ;
-(void)deleteConfirmed;
-(id)initWithUserSession:(id)arg1 ;
-(NSMutableSet *)selectedDrafts;
-(void)setSelectedDrafts:(NSMutableSet *)arg1 ;
-(void)setDrafts:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)drafts;
-(void)editButtonTapped;
-(void)setDelegate:(id<IGDraftBrowserViewControllerDelegate>)arg1 ;
-(id<IGDraftBrowserViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(char)isEditing;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setBottomBar:(UIView *)arg1 ;
-(UIView *)bottomBar;
-(IGUserSession *)userSession;
-(void)loadData;
-(void)doneButtonTapped;
@end

