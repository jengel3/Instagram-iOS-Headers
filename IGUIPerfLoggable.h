

@protocol IGUIPerfLoggable <NSObject>
@required
-(char)shouldLogEvent:(unsigned)arg1;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1;

@end

