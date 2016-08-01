

@protocol FBSDKVideoUploaderDelegate <NSObject>
@required
-(void)videoUploader:(id)arg1 didFailWithError:(id)arg2;
-(id)videoChunkDataForVideoUploader:(id)arg1 startOffset:(unsigned)arg2 endOffset:(unsigned)arg3;
-(void)videoUploader:(id)arg1 didCompleteWithResults:(id)arg2;

@end

