

#import <Instagram/Instagram-Structs.h>
@interface IGUploadVideoMetaData : NSObject {

	CGSize _videoSize;
	SCD_Struct_IG100 _videoDuration;

}

@property (assign,nonatomic) SCD_Struct_IG100 videoDuration;              //@synthesize videoDuration=_videoDuration - In the implementation block
@property (assign,nonatomic) CGSize videoSize;                            //@synthesize videoSize=_videoSize - In the implementation block
-(id)initWithUrl:(id)arg1 ;
-(SCD_Struct_IG100)videoDuration;
-(CGSize)videoSize;
-(void)setVideoDuration:(SCD_Struct_IG100)arg1 ;
-(void)setVideoSize:(CGSize)arg1 ;
-(id)toDictionary;
@end

