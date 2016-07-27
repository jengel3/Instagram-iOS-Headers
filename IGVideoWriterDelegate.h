

@protocol IGVideoWriterDelegate <NSObject>
@required
-(opaqueCMSampleBufferRef)nextAudioSampleBufferForVideoWriter:(id)arg1;
-(void)videoWriter:(id)arg1 didFinishWritingVideoToURL:(id)arg2;
-(void)videoWriter:(id)arg1 didFailWithError:(id)arg2;
-(CVBufferRef)nextRenderedPixelBufferForVideoWriter:(id)arg1 withAdaptor:(id)arg2 getPresentationTime:(SCD_Struct_IG52*)arg3;

@end

