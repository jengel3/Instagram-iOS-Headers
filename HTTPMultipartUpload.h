

@class NSURL, NSDictionary, NSMutableDictionary, NSString, NSHTTPURLResponse;

@interface HTTPMultipartUpload : NSObject {

	NSURL* url_;
	NSDictionary* parameters_;
	NSMutableDictionary* files_;
	NSString* boundary_;
	NSHTTPURLResponse* response_;

}
-(void)addFileUploadAttachment:(id)arg1 ;
-(id)send:(id*)arg1 timeoutInterval:(double)arg2 ;
-(void)addFileContents:(id)arg1 name:(id)arg2 ;
-(id)formDataForKey:(id)arg1 value:(id)arg2 ;
-(id)formDataForFileUploadAttachment:(id)arg1 ;
-(void)addFileAtPath:(id)arg1 name:(id)arg2 ;
-(id)send:(id*)arg1 ;
-(id)multipartBoundary;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)URL;
-(id)response;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(id)files;
@end

