
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentRealtimeUploadable.h>
#import <Instagram/IGDirectCommentable.h>
#import <Instagram/IGDirectContentReactable.h>
#import <Instagram/IGDirectShareProtocol.h>

@class IGDirectContentUploadInfo, NSString, NSArray, IGUser;

@interface IGDirectProfileShare : IGDirectContent <IGDirectContentRealtimeUploadable, IGDirectCommentable, IGDirectContentReactable, IGDirectShareProtocol> {

	char _reactionsNeedsReRender;
	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _uploadComment;
	NSArray* _reactions;
	unsigned _likeCount;
	unsigned _lastReactionType;
	IGUser* _sharedUser;
	NSArray* _previewMedia;

}

@property (nonatomic,retain) IGUser * sharedUser;                                       //@synthesize sharedUser=_sharedUser - In the implementation block
@property (nonatomic,retain) NSArray * previewMedia;                                    //@synthesize previewMedia=_previewMedia - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) IGDirectContentUploadInfo * uploadInfo;                      //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,readonly) char canConvertToFullMessageByAddingItemID; 
@property (nonatomic,retain) NSString * uploadComment;                                  //@synthesize uploadComment=_uploadComment - In the implementation block
@property (nonatomic,retain) NSArray * reactions;                                       //@synthesize reactions=_reactions - In the implementation block
@property (assign,nonatomic) unsigned likeCount;                                        //@synthesize likeCount=_likeCount - In the implementation block
@property (assign,nonatomic) char reactionsNeedsReRender;                               //@synthesize reactionsNeedsReRender=_reactionsNeedsReRender - In the implementation block
@property (assign,nonatomic) unsigned lastReactionType;                                 //@synthesize lastReactionType=_lastReactionType - In the implementation block
-(IGDirectContentUploadInfo *)uploadInfo;
-(NSArray *)previewMedia;
-(void)setPreviewMedia:(NSArray *)arg1 ;
-(NSString *)uploadComment;
-(NSArray *)reactions;
-(void)setReactions:(NSArray *)arg1 ;
-(void)setReactionsNeedsReRender:(char)arg1 ;
-(void)setLastReactionType:(unsigned)arg1 ;
-(id)contentTypeString;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(void)setUploadComment:(NSString *)arg1 ;
-(id)copyOfContentWithReactionFilter:(id)arg1 ;
-(char)reactionsNeedsReRender;
-(unsigned)lastReactionType;
-(id)dictionaryForRealtimeUpload;
-(char)canConvertToFullMessageByAddingItemID;
-(id)reactionItemKey;
-(void)setSharedUser:(IGUser *)arg1 ;
-(id)initAsUploadWithComment:(id)arg1 sharedUser:(id)arg2 recipient:(id)arg3 ;
-(IGUser *)sharedUser;
-(char)isUploading;
-(unsigned)likeCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)subtitle;
-(id)digestDescription;
-(void)setLikeCount:(unsigned)arg1 ;
@end

