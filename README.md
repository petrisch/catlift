# catlift
Project for making a lift for a cat with arduino.
Lets see how this looks like in git.

Now that we want this to be a Github Project we want to add something so we know a bit what to do.
So this is supposed to be a catlift which enables the cat to enter the appartements balcony and eventually the appartement itself.
through an elevator.

What should the elevator do:
- Carry a box with a door or flapdoor
- The door should be closed when the cat is entering, so probably it should have a RFID acces to it.
- Then if the door is closed, a present sensor is telling us, that there is something in the box. Thats because we dont want to guess like schroedinger does.
- The box should then be moved upwards, so from the flow to the 3 floor balcony. There will not be any stop in between. Maybe the neighbours want to join, but thats a different project then.
- Arriving at the top, the door will be released, the cat can now enter the balcony.

How is this to be done:
- There can not be any connection to the outer walls because of the isolation.
- To reduce shaking of the box, there will be two wires connected from the balcony's handrail to the floor.
- The wires are connected to the floor by a beton socket.
- There will be a third wire, which takes on the carrying of the box.
- This wire is moved by a pulley, which is driven by a direct current motor gear.
- That motor gear is a standard motor for a automatic door from gilgen door automation.
- That motor has a control with integrated power section and logical elements to operate a door.
- Direct programming would require the source code of the control, which is hard to get. So the better way is to feed the control by commands from outside.
- This will be done by connecting an arduino to the control.
- To indicate the operation, there will be LEDs mounted on the control box.

Lets do that prototype!

<!-- <!-- This is the branch --> -->
