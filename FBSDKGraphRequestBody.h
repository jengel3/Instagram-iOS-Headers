

@class NSMutableData, NSData;

@interface FBSDKGraphRequestBody : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,retain,readonly) NSData * data; 
+(id)mimeContentType;
-(void)appendUTF8:(id)arg1 ;
-(void)_appendWithKey:(id)arg1 filename:(id)arg2 contentType:(id)arg3 contentBlock:(/*^block*/id)arg4 ;
-(void)appendWithKey:(id)arg1 formValue:(id)arg2 logger:(id)arg3 ;
-(void)appendWithKey:(id)arg1 imageValue:(id)arg2 logger:(id)arg3 ;
-(void)appendWithKey:(id)arg1 dataValue:(id)arg2 logger:(id)arg3 ;
-(void)appendWithKey:(id)arg1 dataAttachmentValue:(id)arg2 logger:(id)arg3 ;
-(id)init;
-(NSData *)data;
@end

