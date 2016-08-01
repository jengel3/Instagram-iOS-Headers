
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentRealtimeUploadable.h>
#import <Instagram/IGDirectUploadableProducer.h>

@class IGDirectContentUploadInfo, NSString, NSArray;

@interface IGDirectComment : IGDirectContent <IGDirectContentRealtimeUploadable, IGDirectUploadableProducer> {

	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _text;
	NSString* _storageKey;
	NSArray* _links;

}

@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * links;                                             //@synthesize links=_links - In the implementation block
@property (nonatomic,copy) NSString * storageKey;                                       //@synthesize storageKey=_storageKey - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) IGDirectContentUploadInfo * uploadInfo;                      //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,readonly) char canConvertToFullMessageByAddingItemID; 
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)updateLinksWithDictionary:(id)arg1 ;
-(NSString *)storageKey;
-(void)setStorageKey:(NSString *)arg1 ;
-(id)uploadableModelWithParameter:(id)arg1 ;
-(char)hasExactlyOneLink;
-(id)contentTypeString;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)dictionaryForRealtimeUpload;
-(char)canConvertToFullMessageByAddingItemID;
-(id)initAsUploadWithText:(id)arg1 recipient:(id)arg2 storageKey:(id)arg3 links:(id)arg4 ;
-(char)isUploading;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)links;
-(id)digestDescription;
-(void)setLinks:(NSArray *)arg1 ;
@end

