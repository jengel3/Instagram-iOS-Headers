
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGVideoWriterDelegate.h>

@protocol IGVideoRendererDelegate, IGVideoRendererProgressDelegate;
@class IGVideoComposition, NSProgress, IGVideoReader, IGVideoWriter, IGRenderer, IGSurface, IGStabilizationFilter, NSString;

@interface IGVideoRenderer : NSObject <IGVideoWriterDelegate> {

	double _prevTime;
	char _saveWhenDone;
	char _shouldUseFallbackSize;
	IGVideoComposition* _video;
	NSProgress* _progress;
	int _status;
	int _retryCount;
	id<IGVideoRendererDelegate> _delegate;
	id<IGVideoRendererProgressDelegate> _progressDelegate;
	IGVideoReader* _videoReader;
	IGVideoWriter* _videoWriter;
	IGRenderer* _renderer;
	IGSurface* _stabilizedFrame;
	IGStabilizationFilter* _stabilizationFilter;

}

@property (nonatomic,retain) IGVideoReader * videoReader;                                              //@synthesize videoReader=_videoReader - In the implementation block
@property (nonatomic,retain) IGVideoWriter * videoWriter;                                              //@synthesize videoWriter=_videoWriter - In the implementation block
@property (nonatomic,retain) IGRenderer * renderer;                                                    //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) IGSurface * stabilizedFrame;                                              //@synthesize stabilizedFrame=_stabilizedFrame - In the implementation block
@property (nonatomic,readonly) IGStabilizationFilter * stabilizationFilter;                            //@synthesize stabilizationFilter=_stabilizationFilter - In the implementation block
@property (assign,nonatomic) int status;                                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) IGVideoComposition * video;                                             //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) int retryCount;                                                         //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoRendererDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoRendererProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (assign,nonatomic) char saveWhenDone;                                                        //@synthesize saveWhenDone=_saveWhenDone - In the implementation block
@property (assign,nonatomic) char shouldUseFallbackSize;                                               //@synthesize shouldUseFallbackSize=_shouldUseFallbackSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVideo:(id)arg1 ;
-(void)setShouldUseFallbackSize:(char)arg1 ;
-(IGSurface *)stabilizedFrame;
-(void)setStabilizedFrame:(IGSurface *)arg1 ;
-(IGStabilizationFilter *)stabilizationFilter;
-(char)saveWhenDone;
-(void)setSaveWhenDone:(char)arg1 ;
-(id)createVideoReader;
-(id)createVideoWriter;
-(char)shouldUseFallbackSize;
-(id)createRenderer;
-(IGVideoReader *)videoReader;
-(IGVideoWriter *)videoWriter;
-(void)setVideoReader:(IGVideoReader *)arg1 ;
-(void)setVideoWriter:(IGVideoWriter *)arg1 ;
-(opaqueCMSampleBufferRef)nextAudioSampleBufferForVideoWriter:(id)arg1 ;
-(void)videoWriter:(id)arg1 didFinishWritingVideoToURL:(id)arg2 ;
-(void)videoWriter:(id)arg1 didFailWithError:(id)arg2 ;
-(CVBufferRef)nextRenderedPixelBufferForVideoWriter:(id)arg1 withAdaptor:(id)arg2 getPresentationTime:(SCD_Struct_IG52*)arg3 ;
-(void)setRenderer:(IGRenderer *)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<IGVideoRendererDelegate>)arg1 ;
-(id<IGVideoRendererDelegate>)delegate;
-(void)suspend;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSProgress *)progress;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(int)retryCount;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(IGVideoComposition *)video;
-(id<IGVideoRendererProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<IGVideoRendererProgressDelegate>)arg1 ;
-(void)render;
-(IGRenderer *)renderer;
@end

