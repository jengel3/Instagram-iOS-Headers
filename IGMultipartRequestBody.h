

@class IGMultipartComponent, NSMutableArray, NSString;

@interface IGMultipartRequestBody : NSObject {

	IGMultipartComponent* _boundaryComponent;
	IGMultipartComponent* _terminalComponent;
	NSMutableArray* _components;
	NSString* _contentType;

}

@property (nonatomic,copy,readonly) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) unsigned contentLength; 
-(id)initWithRequestParameters:(id)arg1 files:(id)arg2 ;
-(NSString *)contentType;
-(unsigned)contentLength;
-(id)inputStream;
@end

