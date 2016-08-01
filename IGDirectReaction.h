
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentRealtimeUploadable.h>

@class IGDirectContentUploadInfo, NSString;

@interface IGDirectReaction : IGDirectContent <IGDirectContentRealtimeUploadable> {

	IGDirectContentUploadInfo* _uploadInfo;
	int _type;

}

@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) IGDirectContentUploadInfo * uploadInfo;                      //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,readonly) char canConvertToFullMessageByAddingItemID; 
-(IGDirectContentUploadInfo *)uploadInfo;
-(id)contentTypeString;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)dictionaryForRealtimeUpload;
-(char)canConvertToFullMessageByAddingItemID;
-(id)initWithRectionType:(int)arg1 recipient:(id)arg2 currentUser:(id)arg3 ;
-(char)isUploading;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)digestDescription;
@end

