
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGMessengerHelperDelegate.h>

@class UICollectionView, IGFeedItem, NSString;

@interface IGExternalShareViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGMessengerHelperDelegate> {

	UICollectionView* _collectionView;
	IGFeedItem* _feedItem;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                        //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allShareOptions;
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(id)createCollectionView;
-(void)externalShareDidFinish;
-(void)presentSystemShareSheet;
-(void)messengerHelperDidFinishSharing:(id)arg1 ;
-(void)messengerHelperDidFailSharing:(id)arg1 ;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end
