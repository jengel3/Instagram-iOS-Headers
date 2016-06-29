

#import <Instagram/Instagram-Structs.h>
@class IGFeedItem, NSIndexPath;

@interface IGFeedItemTrackingData : NSObject {

	IGFeedItem* _feedItem;
	NSIndexPath* _indexPath;
	CGRect _frame;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) CGRect frame;                         //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 frame:(CGRect)arg2 indexPath:(id)arg3 ;
-(CGRect)frame;
-(NSIndexPath *)indexPath;
@end

