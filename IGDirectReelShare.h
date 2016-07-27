
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectCommentable.h>
#import <Instagram/IGDirectUploadable.h>

@class IGDirectContentUploadInfo, NSString, IGFeedItem;

@interface IGDirectReelShare : IGDirectContent <IGDirectCommentable, IGDirectUploadable> {

	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _text;
	IGFeedItem* _feedItem;

}

@property (nonatomic,copy,readonly) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                   //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * uploadComment; 
@property (nonatomic,copy) IGDirectContentUploadInfo * uploadInfo;                      //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,readonly) char canConvertToFullMessageByAddingItemID; 
-(IGFeedItem *)feedItem;
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(char)canConvertToFullMessageByAddingItemID;
-(NSString *)uploadComment;
-(void)setUploadComment:(NSString *)arg1 ;
-(id)contentTypeString;
-(id)initWithUser:(id)arg1 sentAt:(id)arg2 itemID:(id)arg3 clientContextId:(id)arg4 viewCount:(unsigned)arg5 expireAt:(id)arg6 text:(id)arg7 feedItem:(id)arg8 ;
-(id)initAsUploadWithComment:(id)arg1 feedItem:(id)arg2 recipient:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(id)digestDescription;
-(char)isExpired;
@end

