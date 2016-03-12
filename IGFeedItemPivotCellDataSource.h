
#import <UIKit/UICollectionViewDataSource.h>

@class NSMutableArray, IGFeedItem, NSString;

@interface IGFeedItemPivotCellDataSource : NSObject <UICollectionViewDataSource> {

	NSMutableArray* _thumbnails;
	NSMutableArray* _pivots;
	IGFeedItem* _feedItem;

}

@property (nonatomic,readonly) NSMutableArray * pivots;              //@synthesize pivots=_pivots - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(NSMutableArray *)pivots;
-(id)initWithFeedItem:(id)arg1 imageWidth:(float)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
@end

