

@protocol IGVideoWriterDelegate, OS_dispatch_queue;
#import <Instagram/Instagram-Structs.h>
@class IGVideoMetadata, NSURL, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSObject;

@interface IGVideoWriter : NSObject {

	char _videoWritingIsFinished;
	char _audioWritingIsFinished;
	id<IGVideoWriterDelegate> _delegate;
	float _progress;
	IGVideoMetadata* _videoMetadata;
	NSURL* _outputFileURL;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _videoWriterInput;
	AVAssetWriterInput* _audioWriterInput;
	AVAssetWriterInputPixelBufferAdaptor* _bufferAdaptor;
	NSObject*<OS_dispatch_queue> _videoQueue;
	NSObject*<OS_dispatch_queue> _audioQueue;
	CGSize _size;
	SCD_Struct_IG100 _videoDuration;

}

@property (assign,nonatomic,__weak) id<IGVideoWriterDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize size;                                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) float progress;                                                    //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) IGVideoMetadata * videoMetadata;                                   //@synthesize videoMetadata=_videoMetadata - In the implementation block
@property (nonatomic,retain) NSURL * outputFileURL;                                             //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (nonatomic,retain) AVAssetWriter * assetWriter;                                       //@synthesize assetWriter=_assetWriter - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * videoWriterInput;                             //@synthesize videoWriterInput=_videoWriterInput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * audioWriterInput;                             //@synthesize audioWriterInput=_audioWriterInput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputPixelBufferAdaptor * bufferAdaptor;              //@synthesize bufferAdaptor=_bufferAdaptor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> videoQueue;                           //@synthesize videoQueue=_videoQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> audioQueue;                           //@synthesize audioQueue=_audioQueue - In the implementation block
@property (assign,nonatomic) char videoWritingIsFinished;                                       //@synthesize videoWritingIsFinished=_videoWritingIsFinished - In the implementation block
@property (assign,nonatomic) char audioWritingIsFinished;                                       //@synthesize audioWritingIsFinished=_audioWritingIsFinished - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG100 videoDuration;                                    //@synthesize videoDuration=_videoDuration - In the implementation block
-(IGVideoMetadata *)videoMetadata;
-(void)setVideoMetadata:(IGVideoMetadata *)arg1 ;
-(AVAssetWriterInput *)videoWriterInput;
-(AVAssetWriterInput *)audioWriterInput;
-(void)setVideoWriterInput:(AVAssetWriterInput *)arg1 ;
-(void)setAudioWriterInput:(AVAssetWriterInput *)arg1 ;
-(id)initWithSize:(CGSize)arg1 videoMetadata:(id)arg2 ;
-(float)getVideoBitRateForSize:(CGSize)arg1 ;
-(void)setAudioWritingIsFinished:(char)arg1 ;
-(AVAssetWriterInputPixelBufferAdaptor *)bufferAdaptor;
-(char)videoWritingIsFinished;
-(char)audioWritingIsFinished;
-(NSObject*<OS_dispatch_queue>)videoQueue;
-(void)setVideoWritingIsFinished:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)audioQueue;
-(void)setBufferAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg1 ;
-(void)setVideoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAudioQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SCD_Struct_IG100)videoDuration;
-(void)setVideoDuration:(SCD_Struct_IG100)arg1 ;
-(CGSize)size;
-(void)setDelegate:(id<IGVideoWriterDelegate>)arg1 ;
-(id<IGVideoWriterDelegate>)delegate;
-(void)setSize:(CGSize)arg1 ;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(NSURL *)outputFileURL;
-(void)startWriting;
-(AVAssetWriter *)assetWriter;
-(void)setAssetWriter:(AVAssetWriter *)arg1 ;
@end

