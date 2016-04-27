

@class NSString, NSDictionary, NSDate;

@interface DDLogFileInfo : NSObject {

	NSString* filePath;
	NSString* fileName;
	NSDictionary* fileAttributes;
	NSDate* creationDate;
	NSDate* modificationDate;
	unsigned long long fileSize;

}

@property (nonatomic,readonly) NSString * filePath; 
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSDictionary * fileAttributes; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,readonly) double age; 
@property (assign,nonatomic) char isArchived; 
+(id)logFileWithPath:(id)arg1 ;
-(int)reverseCompareByCreationDate:(id)arg1 ;
-(void)setIsArchived:(char)arg1 ;
-(char)hasExtendedAttributeWithName:(id)arg1 ;
-(void)addExtendedAttributeWithName:(id)arg1 ;
-(void)removeExtendedAttributeWithName:(id)arg1 ;
-(void)renameFile:(id)arg1 ;
-(int)reverseCompareByModificationDate:(id)arg1 ;
-(NSDate *)creationDate;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)reset;
-(NSDate *)modificationDate;
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)filePath;
-(char)isArchived;
-(NSString *)fileName;
-(unsigned long long)fileSize;
-(NSDictionary *)fileAttributes;
-(double)age;
@end

