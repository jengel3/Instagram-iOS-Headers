

@class IGVideoComposition;

@interface IGVideoInfo : NSObject {

	IGVideoComposition* _video;

}

@property (nonatomic,retain) IGVideoComposition * video;              //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) float totalDuration; 
-(void)dealloc;
-(float)totalDuration;
-(IGVideoComposition *)video;
-(void)setVideo:(IGVideoComposition *)arg1 ;
@end

