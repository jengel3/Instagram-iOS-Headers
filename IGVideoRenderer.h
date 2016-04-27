
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGVideoWriterDelegate.h>

@protocol IGVideoRendererDelegate, IGVideoRendererProgressDelegate;
@class IGVideoComposition, IGMediaMetadata, IGVideoReader, IGVideoWriter, IGRenderer, IGSurface, IGStabilizationFilter, NSString;

@interface IGVideoRenderer : NSObject <IGVideoWriterDelegate> {

	double _prevTime;
	char _finished;
	char _shouldUseFallbackSize;
	char _saveWhenDone;
	char _canceled;
	IGVideoComposition* _video;
	IGMediaMetadata* _metadata;
	unsigned _retryCount;
	float _progress;
	id<IGVideoRendererDelegate> _delegate;
	id<IGVideoRendererProgressDelegate> _progressDelegate;
	IGVideoReader* _videoReader;
	IGVideoWriter* _videoWriter;
	IGRenderer* _renderer;
	IGSurface* _stabilizedFrame;
	IGStabilizationFilter* _stabilizationFilter;

}

@property (nonatomic,retain) IGVideoComposition * video;                                               //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * metadata;                                               //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) unsigned retryCount;                                                      //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) char finished;                                                            //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) char shouldUseFallbackSize;                                               //@synthesize shouldUseFallbackSize=_shouldUseFallbackSize - In the implementation block
@property (assign,nonatomic) float progress;                                                           //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) char saveWhenDone;                                                        //@synthesize saveWhenDone=_saveWhenDone - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoRendererDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoRendererProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (nonatomic,retain) IGVideoReader * videoReader;                                              //@synthesize videoReader=_videoReader - In the implementation block
@property (nonatomic,retain) IGVideoWriter * videoWriter;                                              //@synthesize videoWriter=_videoWriter - In the implementation block
@property (nonatomic,retain) IGRenderer * renderer;                                                    //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) IGSurface * stabilizedFrame;                                              //@synthesize stabilizedFrame=_stabilizedFrame - In the implementation block
@property (nonatomic,retain) IGStabilizationFilter * stabilizationFilter;                              //@synthesize stabilizationFilter=_stabilizationFilter - In the implementation block
@property (assign,nonatomic) char canceled;                                                            //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVideo:(id)arg1 ;
-(void)setShouldUseFallbackSize:(char)arg1 ;
-(void)renderVideoWithMetadata:(id)arg1 ;
-(id)createVideoReader;
-(id)createVideoWriter;
-(char)shouldUseFallbackSize;
-(id)createRenderer;
-(IGVideoReader *)videoReader;
-(CVBufferRef)nextRenderedPixelBufferForVideoWriter:(id)arg1 withAdaptor:(id)arg2 getPresentationTime:(SCD_Struct_IG100*)arg3 ;
-(opaqueCMSampleBufferRef)nextAudioSampleBufferForVideoWriter:(id)arg1 ;
-(void)videoWriter:(id)arg1 didFinishWritingVideoToURL:(id)arg2 ;
-(void)videoWriter:(id)arg1 didFailWithError:(id)arg2 ;
-(IGVideoWriter *)videoWriter;
-(char)saveWhenDone;
-(void)setSaveWhenDone:(char)arg1 ;
-(void)setVideoReader:(IGVideoReader *)arg1 ;
-(void)setVideoWriter:(IGVideoWriter *)arg1 ;
-(IGSurface *)stabilizedFrame;
-(void)setStabilizedFrame:(IGSurface *)arg1 ;
-(IGStabilizationFilter *)stabilizationFilter;
-(void)setStabilizationFilter:(IGStabilizationFilter *)arg1 ;
-(void)setRenderer:(IGRenderer *)arg1 ;
-(char)finished;
-(void)cancel;
-(void)setDelegate:(id<IGVideoRendererDelegate>)arg1 ;
-(id<IGVideoRendererDelegate>)delegate;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)setCanceled:(char)arg1 ;
-(void)setRetryCount:(unsigned)arg1 ;
-(unsigned)retryCount;
-(void)setMetadata:(IGMediaMetadata *)arg1 ;
-(void)setFinished:(char)arg1 ;
-(char)canceled;
-(IGMediaMetadata *)metadata;
-(IGVideoComposition *)video;
-(void)setVideo:(IGVideoComposition *)arg1 ;
-(id<IGVideoRendererProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<IGVideoRendererProgressDelegate>)arg1 ;
-(IGRenderer *)renderer;
@end

