

@class IGFeedItem;

@interface IGPageMediaVideoViewLoggerProvider : NSObject {

	IGFeedItem* _post;

}

@property (nonatomic,readonly) IGFeedItem * post;              //@synthesize post=_post - In the implementation block
-(IGFeedItem *)post;
-(id)initWithPost:(id)arg1 ;
-(id)loggerForCarouselIndex:(int)arg1 pk:(id)arg2 ;
@end

