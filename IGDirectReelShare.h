
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectCommentable.h>
#import <Instagram/IGDirectUploadable.h>
#import <Instagram/IGDirectMediaViewerProducer.h>

@protocol IGExpiringMediaPosting;
@class IGDirectContentUploadInfo, NSString;

@interface IGDirectReelShare : IGDirectContent <IGDirectCommentable, IGDirectUploadable, IGDirectMediaViewerProducer> {

	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _text;
	id<IGExpiringMediaPosting> _feedItem;

}

@property (nonatomic,copy,readonly) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) id<IGExpiringMediaPosting> feedItem;                     //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * uploadComment; 
@property (nonatomic,copy) IGDirectContentUploadInfo * uploadInfo;                      //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,readonly) char canConvertToFullMessageByAddingItemID; 
-(id<IGExpiringMediaPosting>)feedItem;
-(IGDirectContentUploadInfo *)uploadInfo;
-(NSString *)uploadComment;
-(id)contentTypeString;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(void)setUploadComment:(NSString *)arg1 ;
-(char)canConvertToFullMessageByAddingItemID;
-(id)initWithUser:(id)arg1 sentAt:(id)arg2 itemID:(id)arg3 clientContextId:(id)arg4 viewCount:(unsigned)arg5 expireAt:(id)arg6 text:(id)arg7 feedItem:(id)arg8 ;
-(id)initAsUploadWithComment:(id)arg1 feedItem:(id)arg2 recipient:(id)arg3 ;
-(id)mediaViewerWithPreviewImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(id)digestDescription;
-(char)isExpired;
@end

