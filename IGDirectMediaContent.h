
@class IGPhoto;


@protocol IGDirectMediaContent <NSObject>
@property (nonatomic,readonly) IGPhoto * photo; 
@required
-(IGPhoto *)photo;

@end

