

@class IGPost;

@interface IGPageMediaVideoViewLoggerProvider : NSObject {

	IGPost* _post;

}

@property (nonatomic,readonly) IGPost * post;              //@synthesize post=_post - In the implementation block
-(IGPost *)post;
-(id)initWithPost:(id)arg1 ;
-(id)loggerForCarouselIndex:(int)arg1 pk:(id)arg2 ;
@end

