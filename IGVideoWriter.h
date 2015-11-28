

@protocol IGVideoWriterDelegate, OS_dispatch_queue;
#import <Instagram/Instagram-Structs.h>
@class NSURL, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSObject;

@interface IGVideoWriter : NSObject {

	char _videoWritingIsFinished;
	char _audioWritingIsFinished;
	id<IGVideoWriterDelegate> _delegate;
	NSURL* _outputFileURL;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _videoWriterInput;
	AVAssetWriterInput* _audioWriterInput;
	AVAssetWriterInputPixelBufferAdaptor* _bufferAdaptor;
	NSObject*<OS_dispatch_queue> _videoQueue;
	NSObject*<OS_dispatch_queue> _audioQueue;
	CGSize _size;

}

@property (assign,nonatomic,__weak) id<IGVideoWriterDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize size;                                                       //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSURL * outputFileURL;                                             //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (nonatomic,retain) AVAssetWriter * assetWriter;                                       //@synthesize assetWriter=_assetWriter - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * videoWriterInput;                             //@synthesize videoWriterInput=_videoWriterInput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * audioWriterInput;                             //@synthesize audioWriterInput=_audioWriterInput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputPixelBufferAdaptor * bufferAdaptor;              //@synthesize bufferAdaptor=_bufferAdaptor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> videoQueue;                           //@synthesize videoQueue=_videoQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> audioQueue;                           //@synthesize audioQueue=_audioQueue - In the implementation block
@property (assign,nonatomic) char videoWritingIsFinished;                                       //@synthesize videoWritingIsFinished=_videoWritingIsFinished - In the implementation block
@property (assign,nonatomic) char audioWritingIsFinished;                                       //@synthesize audioWritingIsFinished=_audioWritingIsFinished - In the implementation block
-(AVAssetWriterInput *)videoWriterInput;
-(AVAssetWriterInput *)audioWriterInput;
-(void)setVideoWriterInput:(AVAssetWriterInput *)arg1 ;
-(void)setAudioWriterInput:(AVAssetWriterInput *)arg1 ;
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
-(CGSize)size;
-(void)setDelegate:(id<IGVideoWriterDelegate>)arg1 ;
-(id<IGVideoWriterDelegate>)delegate;
-(void)setSize:(CGSize)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(NSURL *)outputFileURL;
-(void)startWriting;
-(AVAssetWriter *)assetWriter;
-(void)setAssetWriter:(AVAssetWriter *)arg1 ;
@end

