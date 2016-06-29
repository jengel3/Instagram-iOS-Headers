
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol IGPublicThreadInboxViewControllerDelegate;
@class UICollectionView, UILabel, IGTapButton, IGDirectThread, NSMutableArray, UIView, NSString;

@interface IGPublicThreadInboxViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	char _showAll;
	id<IGPublicThreadInboxViewControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	UILabel* _titleLabel;
	IGTapButton* _showHideButton;
	IGDirectThread* _ownedPublicThread;
	NSMutableArray* _unreadFollowedPublicThreads;
	NSMutableArray* _readFollowedPublicThreads;
	UIView* _footerView;
	UILabel* _footerLabel;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGTapButton * showHideButton;                                               //@synthesize showHideButton=_showHideButton - In the implementation block
@property (nonatomic,retain) IGDirectThread * ownedPublicThread;                                         //@synthesize ownedPublicThread=_ownedPublicThread - In the implementation block
@property (nonatomic,copy) NSMutableArray * unreadFollowedPublicThreads;                                 //@synthesize unreadFollowedPublicThreads=_unreadFollowedPublicThreads - In the implementation block
@property (nonatomic,copy) NSMutableArray * readFollowedPublicThreads;                                   //@synthesize readFollowedPublicThreads=_readFollowedPublicThreads - In the implementation block
@property (assign,nonatomic) char showAll;                                                               //@synthesize showAll=_showAll - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                        //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                                                      //@synthesize footerLabel=_footerLabel - In the implementation block
@property (assign,nonatomic,__weak) id<IGPublicThreadInboxViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createTitleLabel;
-(IGDirectThread *)ownedPublicThread;
-(void)inboxUpdateNotificationReceived:(id)arg1 ;
-(IGTapButton *)showHideButton;
-(id)threadAtIndexPath:(id)arg1 ;
-(void)pushToThread:(id)arg1 animated:(char)arg2 ;
-(char)isReadFollowedPublicThreads:(id)arg1 ;
-(id)createShowHideButton;
-(void)setShowHideButton:(IGTapButton *)arg1 ;
-(void)updateShowHideButton;
-(void)onShowHideButtonTapped;
-(id)createCollectionView;
-(id)createFooterView;
-(id)createFooterLabel;
-(void)updateThreadsAndUI;
-(id)createCollectionViewLayout;
-(id)threadAtNextIndexPath:(id)arg1 ;
-(void)setOwnedPublicThread:(IGDirectThread *)arg1 ;
-(NSMutableArray *)unreadFollowedPublicThreads;
-(NSMutableArray *)readFollowedPublicThreads;
-(void)setUnreadFollowedPublicThreads:(NSMutableArray *)arg1 ;
-(void)setReadFollowedPublicThreads:(NSMutableArray *)arg1 ;
-(void)updateViewFrame;
-(void)setShowAll:(char)arg1 ;
-(void)setDelegate:(id<IGPublicThreadInboxViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(id<IGPublicThreadInboxViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(UICollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(id)threads;
-(char)showAll;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UILabel *)footerLabel;
-(void)setupView;
@end

