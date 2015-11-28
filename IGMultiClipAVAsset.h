

#import <Instagram/Instagram-Structs.h>
@class AVAsset;

@interface IGMultiClipAVAsset : NSObject {

	AVAsset* _video;
	CGRect _cropRect;

}

@property (nonatomic,readonly) AVAsset * video;              //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                //@synthesize cropRect=_cropRect - In the implementation block
-(id)initWithVideo:(id)arg1 cropRect:(CGRect)arg2 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(AVAsset *)video;
@end

