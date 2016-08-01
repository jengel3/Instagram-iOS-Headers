

@class NSMutableDictionary;

@interface IGAlbumSeenState : NSObject {

	char _recordNuxAsSeen;
	NSMutableDictionary* _seenDictionary;

}

@property (nonatomic,readonly) NSMutableDictionary * seenDictionary;              //@synthesize seenDictionary=_seenDictionary - In the implementation block
@property (assign,nonatomic) char recordNuxAsSeen;                                //@synthesize recordNuxAsSeen=_recordNuxAsSeen - In the implementation block
-(NSMutableDictionary *)seenDictionary;
-(void)didSeeFullNux:(id)arg1 ;
-(id)formattedPostDictionary;
-(char)recordNuxAsSeen;
-(void)setRecordNuxAsSeen:(char)arg1 ;
-(id)init;
-(char)isEmpty;
@end

