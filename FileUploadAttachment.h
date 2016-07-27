

@class NSString, NSData;

@interface FileUploadAttachment : NSObject {

	NSString* _filename;
	NSString* _name;
	NSString* _contentType;
	NSString* _filePath;
	NSData* _contents;

}
-(id)initWithFilename:(id)arg1 name:(id)arg2 contents:(id)arg3 shouldCompress:(char)arg4 ;
-(id)initWithFilename:(id)arg1 name:(id)arg2 contentType:(id)arg3 filePath:(id)arg4 contents:(id)arg5 ;
-(id)name;
-(id)contents;
-(id)contentType;
-(id)filePath;
-(id)filename;
@end

