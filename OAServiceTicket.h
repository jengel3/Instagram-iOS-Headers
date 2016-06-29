

@class OAMutableURLRequest, NSURLResponse, NSData, NSString;

@interface OAServiceTicket : NSObject {

	OAMutableURLRequest* request;
	NSURLResponse* response;
	NSData* data;
	int responseCode;
	char didSucceed;

}

@property (readonly) OAMutableURLRequest * request; 
@property (readonly) NSURLResponse * response; 
@property (readonly) NSData * data; 
@property (readonly) int responseCode; 
@property (readonly) char didSucceed; 
@property (readonly) NSString * body; 
-(id)initWithRequest:(id)arg1 response:(id)arg2 data:(id)arg3 didSucceed:(char)arg4 responseCode:(int)arg5 ;
-(int)responseCode;
-(char)didSucceed;
-(void)dealloc;
-(OAMutableURLRequest *)request;
-(NSData *)data;
-(NSString *)body;
-(NSURLResponse *)response;
@end

