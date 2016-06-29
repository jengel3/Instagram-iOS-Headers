

@protocol IGVideoWriterDelegate, OS_dispatch_queue;
#import <Instagram/Instagram-Structs.h>
@class NSURL, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSObject, IGVideoConfiguration, NSString;

@interface IGVideoWriter : NSObject {

	char _videoWritingIsFinished;
	char _audioWritingIsFinished;
	char _isFastVideo;
	id<IGVideoWriterDelegate> _delegate;
	float _progress;
	NSURL* _outputFileURL;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _videoWriterInput;
	AVAssetWriterInput* _audioWriterInput;
	AVAssetWriterInputPixelBufferAdaptor* _bufferAdaptor;
	NSObject*<OS_dispatch_queue> _videoQueue;
	NSObject*<OS_dispatch_queue> _audioQueue;
	IGVideoConfiguration* _videoConfiguration;
	NSString* _locationMetadataName;
	CGSize _size;
	SCD_Struct_IG77 _videoDuration;

}

@property (nonatomic,retain) NSURL * outputFileURL;                                             //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (nonatomic,retain) AVAssetWriter * assetWriter;                                       //@synthesize assetWriter=_assetWriter - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * videoWriterInput;                             //@synthesize videoWriterInput=_videoWriterInput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * audioWriterInput;                             //@synthesize audioWriterInput=_audioWriterInput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputPixelBufferAdaptor * bufferAdaptor;              //@synthesize bufferAdaptor=_bufferAdaptor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> videoQueue;                           //@synthesize videoQueue=_videoQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> audioQueue;                           //@synthesize audioQueue=_audioQueue - In the implementation block
@property (assign,nonatomic) char videoWritingIsFinished;                                       //@synthesize videoWritingIsFinished=_videoWritingIsFinished - In the implementation block
@property (assign,nonatomic) char audioWritingIsFinished;                                       //@synthesize audioWritingIsFinished=_audioWritingIsFinished - In the implementation block
@property (nonatomic,readonly) IGVideoConfiguration * videoConfiguration;                       //@synthesize videoConfiguration=_videoConfiguration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IG77 videoDuration;                                   //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) char isFastVideo;                                                //@synthesize isFastVideo=_isFastVideo - In the implementation block
@property (nonatomic,readonly) NSString * locationMetadataName;                                 //@synthesize locationMetadataName=_locationMetadataName - In the implementation block
@property (assign,nonatomic) float progress;                                                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoWriterDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize size;                                                     //@synthesize size=_size - In the implementation block
-(char)isFastVideo;
-(id)initWithVideoConfiguration:(id)arg1 size:(CGSize)arg2 duration:(SCD_Struct_IG77)arg3 isFastVideo:(char)arg4 locationMetadataName:(id)arg5 ;
-(NSString *)locationMetadataName;
-(float)getVideoBitRate;
-(AVAssetWriterInput *)videoWriterInput;
-(AVAssetWriterInput *)audioWriterInput;
-(void)setAudioWritingIsFinished:(char)arg1 ;
-(AVAssetWriterInputPixelBufferAdaptor *)bufferAdaptor;
-(char)videoWritingIsFinished;
-(char)audioWritingIsFinished;
-(NSObject*<OS_dispatch_queue>)videoQueue;
-(void)setVideoWritingIsFinished:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)audioQueue;
-(void)setVideoWriterInput:(AVAssetWriterInput *)arg1 ;
-(void)setAudioWriterInput:(AVAssetWriterInput *)arg1 ;
-(void)setBufferAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg1 ;
-(void)setVideoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAudioQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SCD_Struct_IG77)videoDuration;
-(CGSize)size;
-(void)setDelegate:(id<IGVideoWriterDelegate>)arg1 ;
-(id<IGVideoWriterDelegate>)delegate;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(IGVideoConfiguration *)videoConfiguration;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(NSURL *)outputFileURL;
-(void)startWriting;
-(AVAssetWriter *)assetWriter;
-(void)setAssetWriter:(AVAssetWriter *)arg1 ;
@end

