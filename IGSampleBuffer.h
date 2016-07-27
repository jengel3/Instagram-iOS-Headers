

#import <Instagram/Instagram-Structs.h>
@class NSDictionary;

@interface IGSampleBuffer : NSObject {

	CVBufferRef _imageBuffer;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) CVBufferRef imageBuffer;              //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) CGSize size; 
-(id)initWithImageBuffer:(CVBufferRef)arg1 ;
-(id)initWithImageBuffer:(CVBufferRef)arg1 metadata:(id)arg2 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(NSDictionary *)metadata;
-(CVBufferRef)imageBuffer;
@end

