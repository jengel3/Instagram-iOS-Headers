

@class IGSequence;

@interface IGPatchRange : NSObject {

	IGSequence* _start;
	IGSequence* _end;

}

@property (nonatomic,readonly) IGSequence * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) IGSequence * end;                //@synthesize end=_end - In the implementation block
-(char)containsSequence:(id)arg1 ;
-(id)unionRangeWithRange:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(IGSequence *)start;
-(IGSequence *)end;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
@end

