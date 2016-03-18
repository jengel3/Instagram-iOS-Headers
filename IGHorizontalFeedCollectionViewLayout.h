
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@protocol IGFeedItemActionCellDelegate, IGHorizontalFeedCollectionViewLayoutDelegate;
@class NSDictionary, IGFeedItem;

@interface IGHorizontalFeedCollectionViewLayout : UICollectionViewFlowLayout {

	NSDictionary* _layoutInfo;
	unsigned _currentItemIndex;
	IGFeedItem* _feedItem;
	id<IGFeedItemActionCellDelegate> _actionCellDelegate;
	id<IGHorizontalFeedCollectionViewLayoutDelegate> _delegate;

}

@property (assign,nonatomic) unsigned currentItemIndex;                                                     //@synthesize currentItemIndex=_currentItemIndex - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                         //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemActionCellDelegate> actionCellDelegate;                    //@synthesize actionCellDelegate=_actionCellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGHorizontalFeedCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(unsigned)currentItemIndex;
-(void)setActionCellDelegate:(id<IGFeedItemActionCellDelegate>)arg1 ;
-(void)setCurrentItemIndex:(unsigned)arg1 ;
-(float)heightForItemAtIndexPath:(id)arg1 ;
-(float)currentMediaHeight;
-(float)currentViewHeight;
-(id<IGFeedItemActionCellDelegate>)actionCellDelegate;
-(void)setDelegate:(id<IGHorizontalFeedCollectionViewLayoutDelegate>)arg1 ;
-(id<IGHorizontalFeedCollectionViewLayoutDelegate>)delegate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(float)heightForSection:(unsigned)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(float)maxHeight;
@end

