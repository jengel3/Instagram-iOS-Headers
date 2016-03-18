
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@protocol IGFeedItemActionCellDelegate;
@class IGFeedItem;

@interface IGHorizontalFeedCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	unsigned _currentItemIndex;
	IGFeedItem* _feedItem;
	id<IGFeedItemActionCellDelegate> _actionCellDelegate;

}

@property (assign,nonatomic) unsigned currentItemIndex;                                               //@synthesize currentItemIndex=_currentItemIndex - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                   //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemActionCellDelegate> actionCellDelegate;              //@synthesize actionCellDelegate=_actionCellDelegate - In the implementation block
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(unsigned)currentItemIndex;
-(void)setActionCellDelegate:(id<IGFeedItemActionCellDelegate>)arg1 ;
-(void)setCurrentItemIndex:(unsigned)arg1 ;
-(id<IGFeedItemActionCellDelegate>)actionCellDelegate;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

