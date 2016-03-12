

#import <Instagram/Instagram-Structs.h>
@class IGFeedItem;

@interface IGFeedViewControllerPositionContext : NSObject {

	IGFeedItem* _feedItem;
	CGSize _offset;

}

@property (nonatomic,__weak,readonly) IGFeedItem * feedItem;              //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) CGSize offset;                             //@synthesize offset=_offset - In the implementation block
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 offset:(CGSize)arg2 ;
-(CGSize)offset;
@end

