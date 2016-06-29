
@class IGPhoto, IGDirectItemIdBasedImageURLProcessor;


@protocol IGDirectMediaContent <NSObject>
@property (nonatomic,readonly) IGPhoto * photo; 
@property (nonatomic,readonly) IGDirectItemIdBasedImageURLProcessor * previewImageURLProcessor; 
@required
-(IGDirectItemIdBasedImageURLProcessor *)previewImageURLProcessor;
-(IGPhoto *)photo;

@end

