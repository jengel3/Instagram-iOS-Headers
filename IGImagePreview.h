

#import <Instagram/Instagram-Structs.h>
@interface IGImagePreview : NSObject
+(id)reconstructedImageDataFromPayloadData:(id)arg1 ;
+(id)previewWithData:(id)arg1 desiredSize:(CGSize)arg2 ;
+(id)imageFromPayloadData:(id)arg1 ;
+(id)blurredImageFromImage:(id)arg1 desiredSize:(CGSize)arg2 ;
+(void)generatePreviewWithData:(id)arg1 desiredSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
@end

