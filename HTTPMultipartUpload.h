

@class NSURL, NSDictionary, NSMutableDictionary, NSString, NSHTTPURLResponse;

@interface HTTPMultipartUpload : NSObject {

	NSURL* url_;
	NSDictionary* parameters_;
	NSMutableDictionary* files_;
	NSString* boundary_;
	NSHTTPURLResponse* response_;

}
-(void)addFileContents:(id)arg1 name:(id)arg2 ;
-(id)formDataForFileContents:(id)arg1 name:(id)arg2 ;
-(id)send:(id*)arg1 timeoutInterval:(double)arg2 ;
-(id)formDataForKey:(id)arg1 value:(id)arg2 ;
-(id)formDataForFile:(id)arg1 name:(id)arg2 ;
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

