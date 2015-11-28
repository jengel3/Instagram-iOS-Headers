

@class NSMutableData, NSData;

@interface FBRequestBody : NSObject {

	NSMutableData* _mutableData;

}

@property (nonatomic,retain,readonly) NSData * data; 
@property (nonatomic,retain,readonly) NSMutableData * mutableData;              //@synthesize mutableData=_mutableData - In the implementation block
+(id)mimeContentType;
-(void)appendUTF8:(id)arg1 ;
-(void)appendRecordBoundary;
-(void)appendWithKey:(id)arg1 formValue:(id)arg2 logger:(id)arg3 ;
-(void)appendWithKey:(id)arg1 imageValue:(id)arg2 logger:(id)arg3 ;
-(void)appendWithKey:(id)arg1 dataValue:(id)arg2 logger:(id)arg3 ;
-(NSMutableData *)mutableData;
-(void)dealloc;
-(id)init;
-(NSData *)data;
@end

