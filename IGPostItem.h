
#import <Instagram/IGMediaPreloaderItem.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDKDiffable.h>

@class NSString, IGPhoto, IGVideo, NSURL, IGCommentModel, IGDate, IGDirectResponseInfo;

@interface IGPostItem : NSObject <IGMediaPreloaderItem, NSCoding, IGDKDiffable> {

	NSString* _pk;
	int _mediaType;
	IGPhoto* _photo;
	IGVideo* _video;
	NSURL* _link;
	NSString* _actionText;
	IGCommentModel* _caption;
	float _captionPosition;
	IGCommentModel* _headline;
	IGDate* _takenAtDate;
	IGDirectResponseInfo* _directResponseInfo;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * pk;                                     //@synthesize pk=_pk - In the implementation block
@property (nonatomic,readonly) int mediaType;                                          //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) IGPhoto * photo;                                        //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) IGVideo * video;                                        //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) NSURL * link;                                           //@synthesize link=_link - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionText;                             //@synthesize actionText=_actionText - In the implementation block
@property (nonatomic,readonly) IGCommentModel * caption;                               //@synthesize caption=_caption - In the implementation block
@property (nonatomic,readonly) float captionPosition;                                  //@synthesize captionPosition=_captionPosition - In the implementation block
@property (nonatomic,readonly) IGCommentModel * headline;                              //@synthesize headline=_headline - In the implementation block
@property (nonatomic,readonly) IGDate * takenAtDate;                                   //@synthesize takenAtDate=_takenAtDate - In the implementation block
@property (nonatomic,readonly) IGDirectResponseInfo * directResponseInfo;              //@synthesize directResponseInfo=_directResponseInfo - In the implementation block
-(id)diffIdentifier;
-(NSString *)pk;
-(IGDate *)takenAtDate;
-(float)captionPosition;
-(IGDirectResponseInfo *)directResponseInfo;
-(NSString *)actionText;
-(id)initWithFeedDictionary:(id)arg1 ;
-(id)initWithType:(int)arg1 photo:(id)arg2 video:(id)arg3 link:(id)arg4 pk:(id)arg5 actionText:(id)arg6 directResponseInfo:(id)arg7 caption:(id)arg8 captionPosition:(float)arg9 headline:(id)arg10 takenAtDate:(id)arg11 ;
-(IGCommentModel *)headline;
-(int)mediaType;
-(IGPhoto *)photo;
-(void)setMediaType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSURL *)link;
-(IGCommentModel *)caption;
-(IGVideo *)video;
@end

